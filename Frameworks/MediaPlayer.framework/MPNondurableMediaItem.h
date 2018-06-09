/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long  _persistentID;
}

+ (bool)canFilterByProperty:(id)arg1;
+ (id)defaultPropertyValues;
+ (bool)supportsSecureCoding;

- (bool)didSkipWithPlayedToTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)existsInLibrary;
- (void)incrementPlayCount;
- (void)incrementPlayCountForPlayingToEnd;
- (bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isUsableAsRepresentativeItem;
- (void)markNominalAmountHasBeenPlayed;
- (id)mediaLibrary;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(bool)arg2;
- (unsigned long long)persistentID;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
