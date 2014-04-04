//
//  DetailViewController.h
//  Scout
//
//  Created by Mecolab PUC on 4/4/14.
//  Copyright (c) 2014 Asociación de Guías y Scouts de Chile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
