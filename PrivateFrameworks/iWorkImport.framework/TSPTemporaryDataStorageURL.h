/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryDataStorageURL : NSURL {
    TSUTemporaryDirectory * _parentDirectory;
}

@property (nonatomic, readonly) TSUTemporaryDirectory *parentDirectory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2;
- (id)parentDirectory;

@end
