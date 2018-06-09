/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSortDescriptor : NSSortDescriptor {
    NSArray * _keyPath;
}

@property (nonatomic, copy) NSArray *keyPath;

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;

@end
