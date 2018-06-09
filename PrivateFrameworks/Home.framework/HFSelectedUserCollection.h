/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSelectedUserCollection : NSObject <NAIdentifiable> {
    NSSet * _specificUsers;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *specificUsers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)allUsersCollection;
+ (id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2;
+ (id)collectionWithSpecificUsers:(id)arg1;
+ (id)currentUserCollection;
+ (id)na_identity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 specificUsers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)resolveSelectedUsersWithHome:(id)arg1;
- (id)specificUsers;
- (unsigned long long)type;

@end
