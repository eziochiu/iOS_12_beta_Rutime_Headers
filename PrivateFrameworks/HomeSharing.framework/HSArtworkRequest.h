/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSArtworkRequest : HSRequest

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;

- (bool)acceptsGzipEncoding;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (bool)isConcurrent;

@end
