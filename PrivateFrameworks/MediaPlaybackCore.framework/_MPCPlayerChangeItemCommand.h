/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {
    unsigned long long  _changeItemSupport;
}

@property (nonatomic, readonly) unsigned long long changeItemSupport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)changeItemSupport;
- (id)changeToItem:(id)arg1;
- (id)changeToSection:(id)arg1;
- (id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2;
- (id)nextChapter;
- (id)nextItem;
- (id)nextSection;
- (id)previousChapter;
- (id)previousItem;
- (id)previousSection;

@end
