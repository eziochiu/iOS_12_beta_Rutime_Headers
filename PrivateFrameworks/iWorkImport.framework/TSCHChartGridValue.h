/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridValue : NSObject

+ (id)NSDateConvertedFromGridValue:(id)arg1;
+ (id)NSDateFromGridValue:(id)arg1;
+ (id)dateValueWithDouble:(double)arg1;
+ (id)dateValueWithNSDate:(id)arg1;
+ (id)durationValueWithDouble:(double)arg1;
+ (id)instanceWithArchive:(const struct GridValue { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; double x6; double x7; double x8; }*)arg1;
+ (id)numberValueWithDouble:(double)arg1;
+ (void)saveGridValue:(id)arg1 toArchive:(struct GridValue { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; double x6; double x7; double x8; }*)arg2;

- (id)init;
- (id)initWithArchive:(const struct GridValue { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; double x6; double x7; double x8; }*)arg1;

@end
