/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTSpiceTableModel : GQDTTableModel

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)createSizeArrayFromPositionVector:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)setColumnWidthsFromState:(id)arg1;
- (int)setRowHeightsFromState:(id)arg1;

@end
