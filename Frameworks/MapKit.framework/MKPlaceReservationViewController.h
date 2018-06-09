/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    MKPlaceReservationRowView * _reservationCell;
    _MKPlaceReservationInfo * _reservationInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKPlaceReservationInfo *reservationInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateReservationInfoAnimated:(bool)arg1;
- (id)reservationInfo;
- (void)setReservationInfo:(id)arg1;
- (void)viewDidLoad;

@end
