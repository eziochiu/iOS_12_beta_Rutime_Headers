/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPContactDiskCache : NSObject

+ (id)sharedInstance;

- (bool)deleteNameRecordCache;
- (id)init;
- (id)loadNameRecordCache;
- (bool)writeNameRecordCache:(id)arg1;

@end
