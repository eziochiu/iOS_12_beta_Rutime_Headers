/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUBLogEventID : NSObject {
    long long  _eventType;
    long long  _hash;
    NSString * _idString;
}

@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *idString;

+ (void)initialize;

- (long long)eventType;
- (long long)hash;
- (id)idString;
- (id)initWithCustomKey:(id)arg1;
- (id)initWithEventType:(int)arg1;

@end
