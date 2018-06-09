/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSAApplicationDelegate : TSABaseApplicationDelegate {
    bool  _activating;
    id /* block */  _alertCompletionBlock;
    bool  _hasNotifiedEnterBackground;
    bool  _inBackground;
    bool  _terminating;
}

@property (getter=isActivating) bool activating;
@property (nonatomic, copy) id /* block */ alertCompletionBlock;
@property bool hasNotifiedEnterBackground;
@property (getter=isInBackground) bool inBackground;
@property (getter=isTerminating) bool terminating;

+ (id)sharedDelegate;

- (id /* block */)alertCompletionBlock;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (bool)centerOnInitialSelection;
- (void)dealloc;
- (bool)hasNotifiedEnterBackground;
- (id)image32IconForTXTFiles;
- (id)init;
- (bool)isActivating;
- (bool)isInBackground;
- (bool)isTerminating;
- (id)noDocumentsImagePath;
- (void)persistenceError:(id)arg1;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)setActivating:(bool)arg1;
- (void)setAlertCompletionBlock:(id /* block */)arg1;
- (void)setHasNotifiedEnterBackground:(bool)arg1;
- (void)setInBackground:(bool)arg1;
- (void)setTerminating:(bool)arg1;
- (id)stringForImportingDocument;

@end
