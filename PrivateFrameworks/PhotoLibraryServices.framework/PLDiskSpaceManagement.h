/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject

+ (unsigned long long)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(bool)arg4;
+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(bool)arg2;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 fromPhotoLibrary:(id)arg3;
+ (unsigned long long)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1;
+ (unsigned long long)purgeExpiredOutboundSharingAssetsFromPhotoLibrary:(id)arg1;

@end
