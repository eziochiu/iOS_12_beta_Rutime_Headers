/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWarningHelper : NSObject {
    NSArray * __assets;
}

@property (setter=_setAssets:, nonatomic, retain) NSArray *_assets;

+ (void)getCombinedRemovalDeletionWarningMessage:(id*)arg1 removeButtonTitle:(id*)arg2 deleteButtonTitle:(id*)arg3 cancelTitle:(id*)arg4 forAssets:(id)arg5;
+ (void)getRemovalWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 cancelTitle:(id*)arg3 forAssets:(id)arg4;

- (void).cxx_destruct;
- (id)_assets;
- (void)_setAssets:(id)arg1;
- (id)_suffix;

@end
