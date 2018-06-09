/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptDateFormatter : SUScriptObject {
    NSDateFormatter * _dateFormatter;
}

@property (copy) NSString *dateFormat;
@property (readonly) unsigned long long dateFormatterFullStyle;
@property (readonly) unsigned long long dateFormatterLongStyle;
@property (readonly) unsigned long long dateFormatterMediumStyle;
@property (readonly) unsigned long long dateFormatterNoStyle;
@property (readonly) unsigned long long dateFormatterShortStyle;
@property unsigned long long dateStyle;
@property (copy) NSString *localeIdentifier;
@property unsigned long long timeStyle;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)dateFormat;
- (unsigned long long)dateFormatterFullStyle;
- (unsigned long long)dateFormatterLongStyle;
- (unsigned long long)dateFormatterMediumStyle;
- (unsigned long long)dateFormatterNoStyle;
- (unsigned long long)dateFormatterShortStyle;
- (double)dateFromString:(id)arg1;
- (unsigned long long)dateStyle;
- (void)dealloc;
- (id)init;
- (id)localeIdentifier;
- (id)scriptAttributeKeys;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (id)stringFromDate:(id)arg1;
- (unsigned long long)timeStyle;

@end
