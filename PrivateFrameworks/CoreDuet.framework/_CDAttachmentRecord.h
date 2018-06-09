/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAttachmentRecord : NSManagedObject

@property (nonatomic, retain) NSUUID *cloudIdentifier;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSSet *interactions;
@property (nonatomic) long long sizeInBytes;
@property (nonatomic, retain) NSString *uti;

@end
