/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUICAPackageDescription : NSObject {
    bool  _flipsForRightToLeftLayoutDirection;
    NSURL * _packageURL;
}

@property (nonatomic) bool flipsForRightToLeftLayoutDirection;
@property (nonatomic, readonly, copy) NSURL *packageURL;

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (bool)flipsForRightToLeftLayoutDirection;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;
- (id)packageURL;
- (void)setFlipsForRightToLeftLayoutDirection:(bool)arg1;

@end
