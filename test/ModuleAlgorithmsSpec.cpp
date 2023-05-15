#include "models/Module.hpp"
#include <catch2/catch_test_macros.hpp>
#include <string_view>
#include <xtensor.hpp>
#include "algorithms/ModuleAlgorithms.hpp"

TEST_CASE("Test Module Algorithms") {

	SECTION("Properly computes mean from a batch of tensors filled with ones") {
		std::vector<xt::xarray<double>> batch;

		for(int i = 0; i<5; i++) {
			batch.emplace_back(xt::ones<double>({3, 3}));
		}
		auto expected = 1.0;
		REQUIRE(ModuleAlgos::computeBatchMean<std::vector<xt::xarray<double>>>(batch)==expected);
	}
}