/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMetadata : NSObject {
    NSArray * _allRanges;
    NSString * _identifier;
    NSArray * _loudnessRanges;
}

@property (retain) NSArray *allRanges;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) NSArray *loudnessRanges;

- (void).cxx_destruct;
- (void)addRanges:(id)arg1;
- (id)allRanges;
- (void)getMetadata;
- (id)identifier;
- (id)loudnessRanges;
- (void)removeRangesOfType:(unsigned long long)arg1;
- (void)setAllRanges:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRanges:(id)arg1;

@end