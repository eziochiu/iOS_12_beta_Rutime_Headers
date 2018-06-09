/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {
    NSDictionary * _archiveDictionary;
    NSURL * _archiveURL;
    NSString * _rootUSDPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canResolveAssetNamed:(id)arg1;
- (id)firstAssetPathInArchive;
- (id)initWithURL:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;

@end
