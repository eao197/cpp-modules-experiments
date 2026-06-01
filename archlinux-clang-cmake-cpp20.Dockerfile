FROM archlinux:latest

# Prepare build environment
RUN pacman -Sy --noconfirm clang libc++ \
	&& echo "-stdlib=libc++" >> /etc/makepkg.conf \
	&& pacman -Sy --noconfirm wget \
	&& pacman -Sy --noconfirm git \
	&& pacman -Sy --noconfirm openssl

RUN echo "*** Getting CMake ***" \
	&& pacman -Sy --noconfirm cmake ninja

RUN pacman -Sy --noconfirm vim

ARG rev=HEAD

RUN echo "*** Downloading sources ***" \
	&& cd /tmp \
	&& git clone https://github.com/eao197/cpp-modules-experiments \
	&& cd cpp-modules-experiments \
	&& git checkout $rev

RUN echo "*** Building case_001 ***" \
	&& cd /tmp/cpp-modules-experiments/case_001 \
	&& mkdir cmake_build_clang \
	&& cd cmake_build_clang \
	&& cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
		-DCMAKE_CXX_FLAGS="-stdlib=libc++" -G Ninja .. \
	&& cmake --build .

RUN echo "*** Building case_003 ***" \
	&& cd /tmp/cpp-modules-experiments/case_003 \
	&& mkdir cmake_build_clang \
	&& cd cmake_build_clang \
	&& cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
		-DCMAKE_CXX_FLAGS="-stdlib=libc++" -G Ninja .. \
	&& cmake --build .

