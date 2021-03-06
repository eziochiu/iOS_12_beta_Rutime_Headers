/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPResourceRequest : NSObject

+ (id)alternateBundle;
+ (id)bundle;
+ (id)createResourceRequestForDocumentResourceInfos:(id)arg1 resourceContext:(id)arg2;
+ (id)createResourceRequestForTags:(id)arg1;
+ (id)createResourceRequestForTags:(id)arg1 resourceContext:(id)arg2;
+ (id)documentResourceAlternateFileURLProvider;
+ (long long)resourceAccessTypeForResourceRequest:(id)arg1;
+ (void)setAlternateBundle:(id)arg1;
+ (void)setDocumentResourceAlternateFileURLProvider:(id)arg1;

- (id)init;

@end
