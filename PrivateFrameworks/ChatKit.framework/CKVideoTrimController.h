/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoTrimController : NSObject <UINavigationControllerDelegate, UIVideoEditorControllerDelegatePrivate> {
    <CKTrimControllerDelegate> * _delegate;
    CKUIVideoEditorController * _editVideoVC;
    CKMediaObject * _originalMediaObject;
    CKMediaObject * _trimmedMediaObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKTrimControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKUIVideoEditorController *editVideoVC;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMediaObject *originalMediaObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKMediaObject *trimmedMediaObject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)editVideoVC;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;
- (id)originalMediaObject;
- (void)setDelegate:(id)arg1;
- (void)setEditVideoVC:(id)arg1;
- (void)setOriginalMediaObject:(id)arg1;
- (void)setTrimmedMediaObject:(id)arg1;
- (id)trimmedMediaObject;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;

@end
