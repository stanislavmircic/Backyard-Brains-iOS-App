/*
 *  SCFetchItemsCell.h
 *  Sensible TableView
 *  Version: 3.0.5
 *
 *
 *	THIS SOURCE CODE AND ANY ACCOMPANYING DOCUMENTATION ARE PROTECTED BY UNITED STATES 
 *	INTELLECTUAL PROPERTY LAW AND INTERNATIONAL TREATIES. UNAUTHORIZED REPRODUCTION OR 
 *	DISTRIBUTION IS SUBJECT TO CIVIL AND CRIMINAL PENALTIES. YOU SHALL NOT DEVELOP NOR
 *	MAKE AVAILABLE ANY WORK THAT COMPETES WITH A SENSIBLE COCOA PRODUCT DERIVED FROM THIS 
 *	SOURCE CODE. THIS SOURCE CODE MAY NOT BE RESOLD OR REDISTRIBUTED ON A STAND ALONE BASIS.
 *
 *	USAGE OF THIS SOURCE CODE IS BOUND BY THE LICENSE AGREEMENT PROVIDED WITH THE 
 *	DOWNLOADED PRODUCT.
 *
 *  Copyright 2012 Sensible Cocoa. All rights reserved.
 *
 *
 *	This notice may not be removed from this file.
 *
 */

#import "SCTableViewCell.h"


@interface SCFetchItemsCell : SCCustomCell
{
    UIActivityIndicatorView *_activityIndicator;
    BOOL _autoFetchItems;
    BOOL _autoHide;
}

@property (nonatomic, readwrite) BOOL autoFetchItems;
@property (nonatomic, readwrite) BOOL autoHide;

// internal
- (void)fetchItems;
- (void)didFetchItems;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;

@end