/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationExtensionCache : NSObject {
    struct NSMutableDictionary { Class x1; } * _extensions;
}

@property (nonatomic, retain) NSMutableDictionary *extensions;

- (void).cxx_destruct;
- (void)_addExtension:(id)arg1;
- (id)_categoriesForExtension:(id)arg1;
- (id)_customSectionIdentifierForExtension:(id)arg1;
- (id)_extensionMatchingSection:(id)arg1 category:(id)arg2;
- (void)_removeAllExtensions;
- (struct NSMutableDictionary { Class x1; }*)_sectionDictForSection:(id)arg1;
- (id)extensionForNotificationRequest:(id)arg1;
- (struct NSMutableDictionary { Class x1; }*)extensions;
- (id)init;
- (void)registerExtensions:(id)arg1;
- (void)setExtensions:(struct NSMutableDictionary { Class x1; }*)arg1;

@end
