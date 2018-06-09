/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {
    NSData * _promiseScope;
    NSURL * _promiseURL;
    NSData * _scope;
    NSURL * _url;
}

@property (retain) NSData *promiseScope;
@property (retain) NSURL *promiseURL;
@property (retain) NSData *scope;
@property (nonatomic, copy) NSURL *url;

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)wrapperForExportWithURL:(id)arg1 error:(id*)arg2;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(bool)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(bool)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)promiseScope;
- (id)promiseURL;
- (id)scope;
- (void)setPromiseScope:(id)arg1;
- (void)setPromiseURL:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
