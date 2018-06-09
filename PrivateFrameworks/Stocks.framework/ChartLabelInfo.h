/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartLabelInfo : NSObject {
    bool  _immutable;
    double  _position;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _string;
}

@property (nonatomic, readonly) bool immutable;
@property (nonatomic) double position;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)immutable;
- (double)position;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setImmutable:(bool)arg1;
- (void)setPosition:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setString:(id)arg1;
- (void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2;
- (void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)string;

@end
