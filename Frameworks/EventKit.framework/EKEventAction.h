/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventAction : EKObject

@property (nonatomic, readonly) NSString *externalFolderID;
@property (nonatomic, readonly) NSString *externalID;

+ (Class)frozenClass;

- (id)externalFolderID;
- (id)externalID;

@end
