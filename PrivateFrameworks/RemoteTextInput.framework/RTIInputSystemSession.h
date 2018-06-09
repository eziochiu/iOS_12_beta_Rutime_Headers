/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemSession : NSObject {
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    NSHashTable * _extraSessionDelegates;
    <RTIInputSystemSessionDelegate> * _sessionDelegate;
    RTITextOperations * _textOperations;
    NSUUID * _uuid;
}

@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (nonatomic, retain) NSHashTable *extraSessionDelegates;
@property (nonatomic) <RTIInputSystemSessionDelegate> *sessionDelegate;
@property (nonatomic, retain) RTITextOperations *textOperations;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2;
- (void)_createTextOperationsIfNecessary;
- (void)addSessionDelegate:(id)arg1;
- (id)documentState;
- (id)documentTraits;
- (void)enumerateSessionDelegatesUsingBlock:(id /* block */)arg1;
- (id)extraSessionDelegates;
- (void)flushOperations;
- (void)removeSessionDelegate:(id)arg1;
- (id)sessionDelegate;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setExtraSessionDelegates:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setTextOperations:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)textOperations;
- (id)uuid;

@end