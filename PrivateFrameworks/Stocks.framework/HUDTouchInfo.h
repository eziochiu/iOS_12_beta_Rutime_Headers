/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface HUDTouchInfo : NSObject {
    UIView * _bar;
    UIImageView * _dot;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInHUD;
    struct CGPoint { 
        double x; 
        double y; 
    }  _plottedLocation;
    struct { 
        double unixTime; 
        double price; 
        unsigned long long volume; 
    }  _stockValue;
    UITouch * _touch;
}

@property (nonatomic, retain) UIView *bar;
@property (nonatomic, retain) UIImageView *dot;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationInHUD;
@property (nonatomic) struct CGPoint { double x1; double x2; } plottedLocation;
@property (nonatomic) struct { double x1; double x2; unsigned long long x3; } stockValue;
@property (nonatomic) UITouch *touch;

- (void).cxx_destruct;
- (id)bar;
- (id)description;
- (id)dot;
- (struct CGPoint { double x1; double x2; })locationInHUD;
- (struct CGPoint { double x1; double x2; })plottedLocation;
- (void)setBar:(id)arg1;
- (void)setDot:(id)arg1;
- (void)setLocationInHUD:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPlottedLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStockValue:(struct { double x1; double x2; unsigned long long x3; })arg1;
- (void)setTouch:(id)arg1;
- (struct { double x1; double x2; unsigned long long x3; })stockValue;
- (id)touch;

@end
