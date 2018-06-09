/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKExportOperation : NSManagedObject

@property (nonatomic, retain) NSCKExportMetadata *exportMetadata;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *objects;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSNumber *statusNum;

- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
