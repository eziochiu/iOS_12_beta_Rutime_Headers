/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (nonatomic, retain) SAUIAppPunchOut *buyTicketsPunchout;
@property (nonatomic, copy) NSNumber *childTicketQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool is3d;
@property (nonatomic) bool isImax;
@property (nonatomic, copy) NSNumber *regularTicketQuantity;
@property (nonatomic, copy) NSNumber *seniorTicketQuantity;
@property (nonatomic, retain) SACalendar *showtime;
@property (readonly) Class superclass;

+ (id)showtime;
+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;

- (id)buyTicketsPunchout;
- (id)childTicketQuantity;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)is3d;
- (bool)isImax;
- (id)regularTicketQuantity;
- (id)seniorTicketQuantity;
- (void)setBuyTicketsPunchout:(id)arg1;
- (void)setChildTicketQuantity:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsImax:(bool)arg1;
- (void)setRegularTicketQuantity:(id)arg1;
- (void)setSeniorTicketQuantity:(id)arg1;
- (void)setShowtime:(id)arg1;
- (id)showtime;

@end
