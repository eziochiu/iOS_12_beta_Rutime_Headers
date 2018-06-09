/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUDynamicTypeProvider : NSObject <NUDynamicTypeProviding> {
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)handleContentSizeCategoryChange:(id)arg1;
- (id)initWithNoticiationCenter:(id)arg1;
- (id)notificationCenter;
- (id)observers;
- (id)prefferedContentSizeCategory;

@end
