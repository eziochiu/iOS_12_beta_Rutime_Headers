/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCImageStore : NSObject {
    NSData * _data;
    NSDictionary * _dictionary;
    NSArray * _rawArray;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSArray *rawArray;

- (void).cxx_destruct;
- (id)data;
- (id)dictionary;
- (id)generateImageDictionaryFromArray:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)rawArray;
- (void)setData:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setRawArray:(id)arg1;
- (id)stringPaddedForBase64:(id)arg1;

@end
