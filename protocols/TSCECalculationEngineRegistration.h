/* made by EzioChiu.
 */

@protocol TSCECalculationEngineRegistration <TSKModel>

@required

- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })formulaOwnerUID;
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (bool)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
- (void)unregisterFromCalculationEngine:(TSCECalculationEngine *)arg1;

@end
