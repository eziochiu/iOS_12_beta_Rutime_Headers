/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemClientSession : NSObject {
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
}

@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;

- (void).cxx_destruct;
- (id)documentState;
- (id)documentTraits;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;

@end
