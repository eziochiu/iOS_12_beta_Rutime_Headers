/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBundleResourcePackage : NSObject {
    NSMutableDictionary * mEntryMap;
    OISFUZipArchive * mZipArchive;
}

- (void)dealloc;
- (id)entryWithName:(id)arg1 cacheResult:(bool)arg2;
- (id)initWithZipArchive:(id)arg1;

@end
