#pragma once

#include <memory>
#include "../model/IObserver.h"
#include "../Content.h"

namespace view {

//! View of the game
class View : public ::model::IObserver
{
public:
	View( Content* pContent );

	~View();

	//! Initiates the view.
	void init();

	//! Updates the view
	void update();

	//! Is the view open
	bool isOpen();

	void notify( const model::Event& e );

	bool readEvent( ::sf::Event& event );

private:

	class Impl;

	std::auto_ptr<Impl> m_apImpl;

};

}
