
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

extern int randen_nanobenchmark_test_main(int argc, const char** argv);
extern int randen_benchmark_main(int argc, const char** argv);
extern int randen_test_main(int argc, const char** argv);
extern int randen_vector128_test_main(int argc, const char** argv);
extern int bibutils_copac2xml_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
