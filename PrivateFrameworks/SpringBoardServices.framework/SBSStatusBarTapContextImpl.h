/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext> {
    int  _styleOverride;
}

@property (nonatomic) int styleOverride;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleOverride:(int)arg1;
- (void)setStyleOverride:(int)arg1;
- (int)styleOverride;

@end
