/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFileProviderUtilities : NSObject

+ (void)bookmarkableStringFromDocumentURL:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)initialize;
+ (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;

- (id)init;

@end
