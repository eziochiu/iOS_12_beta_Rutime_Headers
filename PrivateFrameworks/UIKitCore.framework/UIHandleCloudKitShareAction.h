/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHandleCloudKitShareAction : BSAction {
    CKShareMetadata * _cachedMetadata;
}

@property (nonatomic, readonly) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)arg1;
+ (void)loadCloudKitFramework;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)data;
- (id)initWithShareMetadata:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)shareMetadata;

@end
