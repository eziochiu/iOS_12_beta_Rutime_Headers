/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioResponse : NSObject {
    NSDate * _expirationDate;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *contentDictionary;
@property (nonatomic, readonly, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSError *serverError;

- (void).cxx_destruct;
- (id)contentDictionary;
- (id)dialog;
- (id)expirationDate;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithURLResponse:(id)arg1;
- (id)responseDictionary;
- (id)serverError;

@end
