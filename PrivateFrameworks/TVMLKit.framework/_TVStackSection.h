/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackSection : NSObject {
    long long  _firstItemRowIndex;
    long long  _firstRowIndex;
    long long  _rowCount;
    double  _sectionHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionSpacing;
}

@property (nonatomic) long long firstItemRowIndex;
@property (nonatomic) long long firstRowIndex;
@property (nonatomic) long long rowCount;
@property (nonatomic) double sectionHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionSpacing;

- (id)debugDescription;
- (long long)firstItemRowIndex;
- (long long)firstRowIndex;
- (long long)rowCount;
- (double)sectionHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionSpacing;
- (void)setFirstItemRowIndex:(long long)arg1;
- (void)setFirstRowIndex:(long long)arg1;
- (void)setRowCount:(long long)arg1;
- (void)setSectionHeight:(double)arg1;
- (void)setSectionSpacing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end