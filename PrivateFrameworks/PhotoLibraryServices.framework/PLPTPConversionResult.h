/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPConversionResult : NSObject {
    unsigned long long  _estimatedFileLength;
    NSString * _pathExtension;
}

@property (readonly) unsigned long long estimatedFileLength;
@property (readonly, copy) NSString *pathExtension;

- (void).cxx_destruct;
- (unsigned long long)estimatedFileLength;
- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;
- (id)pathExtension;

@end
