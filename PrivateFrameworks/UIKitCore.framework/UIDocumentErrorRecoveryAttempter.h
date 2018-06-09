/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentErrorRecoveryAttempter : NSObject {
    id /* block */  _appModalRecoveryAttempter;
    id /* block */  _continuerOrNil;
    UIDocument * _document;
    struct { 
        unsigned int attemptedRecovery : 1; 
    }  _errorRecoveryAttempterFlags;
    id /* block */  _recoveryCancelerOrNil;
    long long  _silentRecoveryOptionIndex;
    id  _wrappedRecoveryAttempter;
}

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (bool)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2;
- (void)cancelRecovery;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(id /* block */)arg3 recoveryCanceler:(id /* block */)arg4;
- (id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2;

@end
