/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding> {
    double  _bottomLeft;
    double  _bottomRight;
    double  _topLeft;
    double  _topRight;
}

@property (nonatomic) double bottomLeft;
@property (nonatomic) double bottomRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCongruent;
@property (readonly) Class superclass;
@property (nonatomic) double topLeft;
@property (nonatomic) double topRight;

- (double)bottomLeft;
- (double)bottomRight;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCornerRadius:(double)arg1;
- (id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isCongruent;
- (void)setBottomLeft:(double)arg1;
- (void)setBottomRight:(double)arg1;
- (void)setTopLeft:(double)arg1;
- (void)setTopRight:(double)arg1;
- (double)topLeft;
- (double)topRight;

@end
