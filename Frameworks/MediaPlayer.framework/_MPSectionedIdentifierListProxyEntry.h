/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {
    long long  _branchDepth;
    long long  _entryType;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)branchDepth;
- (id)description;
- (long long)entryType;
- (id)initWithType:(long long)arg1 branchDepth:(long long)arg2;
- (id)itemResult;
- (id)trackingEntryResult;

@end
