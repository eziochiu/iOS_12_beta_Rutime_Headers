/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryActionDeleteOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPUContentItemIdentifierCollection * _contentItemIdentifierCollection;
    NSError * _resultError;
    bool  _success;
}

@property (readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection;
@property (readonly, copy) NSError *resultError;
@property (readonly) bool success;

- (void).cxx_destruct;
- (id)contentItemIdentifierCollection;
- (id)init;
- (id)initWithContentItemIdentifierCollection:(id)arg1;
- (void)main;
- (id)resultError;
- (bool)success;

@end
