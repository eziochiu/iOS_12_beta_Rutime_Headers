/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAlwaysAllowList : NSObject <NSCopying> {
    NSArray * _allowedBundleIDs;
}

@property (nonatomic, copy) NSArray *allowedBundleIDs;

- (void).cxx_destruct;
- (id)allowedBundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAlwaysAllowBundleIDs;
- (id)init;
- (id)initWithActivation:(id)arg1;
- (void)setAllowedBundleIDs:(id)arg1;

@end
