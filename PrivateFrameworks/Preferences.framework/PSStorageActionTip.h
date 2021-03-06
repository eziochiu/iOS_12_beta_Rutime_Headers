/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageActionTip : PSStorageTip {
    NSArray * _significantItems;
}

@property (nonatomic) Class detailControllerClass;
@property (nonatomic, copy) NSArray *significantItems;

- (void).cxx_destruct;
- (Class)detailControllerClass;
- (id)init;
- (void)setDetailControllerClass:(Class)arg1;
- (void)setSignificantItems:(id)arg1;
- (id)significantItems;

@end
