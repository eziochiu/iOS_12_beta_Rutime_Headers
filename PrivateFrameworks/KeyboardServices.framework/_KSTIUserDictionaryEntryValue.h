/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry> {
    NSString * _phrase;
    NSString * _shortcut;
    NSDate * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *shortcut;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;
+ (id)valueWithEntry:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)matchesEntry:(id)arg1;
- (id)phrase;
- (void)setPhrase:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortcut;
- (id)shortcutForSorting;
- (id)timestamp;

@end
