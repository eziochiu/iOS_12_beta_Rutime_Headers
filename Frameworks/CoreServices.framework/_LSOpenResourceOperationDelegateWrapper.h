/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate> {
    <LSOpenResourceOperationDelegate> * _delegate;
    NSOperation * _operation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;

@end
